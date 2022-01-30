import Data.Char
uc :: String -> String
uc = map toUpper

lc :: String -> String
lc = map toLower
main = do
    putStrLn "Enter The String"
    a <- getLine
    print(uc(a))
    print(lc(a))

