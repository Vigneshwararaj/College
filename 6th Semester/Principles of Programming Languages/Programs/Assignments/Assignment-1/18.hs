lrt :: Int -> Int -> Int
lrt a 0 = 0
lrt a b 
    |a<b = a
    |otherwise = b
main = do 
    putStrLn "Enter the 1st number"
    a <- getLine
    putStrLn "Enter the 2nd number"
    b <- getLine

    let ax = read a :: Int
    let bx = read b :: Int

    putStrLn( "The smallest of the 2 numbers " ++ a ++ " and " ++ b ++ " is ")
    print(lrt ax bx)