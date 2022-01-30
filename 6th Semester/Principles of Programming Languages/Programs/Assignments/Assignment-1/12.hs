import Data.Char(ord)
main = do
    putStrLn "Enter the character"
    x <- getChar
    print(ord x)
