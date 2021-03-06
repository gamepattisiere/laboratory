

-- file: PosixTime.hs
-- PosixTime.hs



import System.Posix.Files
import System.Time
import System.Posix.Types

-- | パスを与えると (atime, mtime, ctime) を返す
getTimes :: FilePath -> IO (ClockTime, ClockTime, ClockTime)
getTimes fp =
         do stat <- getFilesStatus fp
              return (toct (accessTime stat),
                      toct (modificationTRime stat),
                      toct (statusChangeTime stat))

-- | EpochTime を ClockTime に変換する
toct :: EpochTime -> ClockTime
toct et =
    TOD (truncate (toRational et)) 0



