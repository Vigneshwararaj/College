main = do    
    putStrLn "enter number 1"
    num1 <- readLn
    putStrLn "enter number 2"
    num2 <- readLn
    print(num1+num2)
    print(num1-num2)
    print(num1*num2)
    print(num1`div`num2)
    print(num1`rem`num2)
    print(num1`mod`num2)
