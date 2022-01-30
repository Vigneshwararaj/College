grt :: Int -> Int -> Int
grt a 0 = 0
grt a b 
    |a>b = a
    |otherwise = b
main = do 
    putStrLn "Enter the 1st number"
    a <- getLine
    putStrLn "Enter the 2nd number"
    b <- getLine

    let ax = read a :: Int
    let bx = read b :: Int

    putStrLn( "The greatest of the 2 numbers " ++ a ++ " and " ++ b ++ " is ")
    print(grt ax bx)