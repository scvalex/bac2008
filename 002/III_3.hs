import Data.List
import Text.Printf

main :: IO ()
main = do
  txt <- readFile "NR.TXT"
  let xs = sort . filter (>0) .  map read . words $ txt :: [Int]
  mapM_ (printf "%d ") xs
  putStrLn ""
