import Data.Char
main = do
    putStrLn "Enter the character"
    x <- getLine
    let cx = map toUpper x
    print("The upper case for character is: " ++ cx)
