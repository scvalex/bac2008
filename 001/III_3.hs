import System.IO
import Text.Printf

main :: IO ()
main = do
  printf "n="
  hFlush stdout
  n <- return . read =<< getLine
  vals <- return . take n . map read . words =<< readFile "bac.txt"
  let vals' = filter ((==0) . (`mod`n)) vals
  if null vals'
     then printf "NU EXISTA"
     else mapM_ (printf "%d ") vals'
  printf "\n"
