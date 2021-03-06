
require 'thread'

class Store
  def initialize
    @mutex = Mutex.new
    @sleepingTime = 5
    puts "準備中です。"
  end
  
  def run
    @mutex.lock
    sleep @sleepingTime
    @mutex.unlock
    puts "開店しました。"
  end
  
  def enter(name)
    while @mutex.locked?
      puts "#{name} は入店待ちです。"
      sleep 1
    end
    puts "#{name} は入店しました。"
  end
end

store = Store.new
th1 = Thread.start{store.run}
th2 = Thread.start{store.enter("musashi")}
th3 = Thread.start{store.enter("kojiro")}

th1.join
th2.join
th3.join

