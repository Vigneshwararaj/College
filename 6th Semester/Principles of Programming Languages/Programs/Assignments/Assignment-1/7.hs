main = do
    putStrLn "Enter value of P"
    p <- getLine
    putStrLn "Enter value of T"
    t <- getLine
    putStrLn "Enter value of R"
    r <- getLine
    let p1 = read p :: Double
    let r1 = read r :: Double
    let t1 = read t :: Double
    let s1 = (p1*r1*t1)/100
    putStrLn ("Simple Interest: " ++ show(s1))
