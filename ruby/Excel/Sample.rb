


require 'rubygems'
require "spreadsheet/excel"
include Spreadsheet

workbook = Excel.new("test.xls")
#worksheet = workbook.add_worksheet

# write(行番号,列番号,書き込むArray)
#worksheet.write(0, 0, "hello")
#worksheet.write(1, 0, ["Matz", "Guido", "Larry"])

workbook.close



