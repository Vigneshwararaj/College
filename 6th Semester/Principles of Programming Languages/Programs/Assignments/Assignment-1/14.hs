getDouble :: IO Double 
getDouble = readLn
main = do    
    putStrLn "Enter The First Number "
    a <- getDouble
    putStrLn "Enter the Second Number"
    b <- getDouble
    putStrLn $ "Before swapping a,b " ++ show a ++" "++  show b
    let temp = a
    let a = b
    let b = temp 
    putStrLn $ "After swapping a,b " ++ show a ++" "++  show b
