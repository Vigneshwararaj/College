main = do
    putStrLn "Enter the 1st number"
    a <- getLine
    putStrLn "Enter the 2nd number"
    b <- getLine

    
    
    let a1 = read a :: Int
    let b1 = read b :: Int

    putStrLn("The 1st variable is " )
    print a1
    putStrLn(" and the second variable is " )
    print b1
    putStrLn("After Swapping : ")

    let a1 = a1 + b1
    let b1 = a1 - b1
    let a1 = a1 - b1
    
    putStrLn("The 1st variable is ")
    print (a1)
    putStrLn(" and the second variable is ")
    print (b1)