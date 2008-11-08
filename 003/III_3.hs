import Data.List
import Text.Printf

main :: IO ()
main = do
  txt <- readFile "NR.TXT"
  let xs = sort . map read . filter ((>=3) . length) . words $ txt
  if null xs
     then printf "NU EXISTA"
     else mapM_ (printf "%d ") (xs :: [Int])
  printf "\n"
