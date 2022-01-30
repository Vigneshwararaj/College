main = do
    putStrLn "Enter the value of p"
    p <- getLine
    putStrLn "Enter the value of t"
    t <- getLine
    putStrLn "Enter the value of r"
    r <- getLine
    let px = read p :: Double
    let rx = read r :: Double
    let tx = read t :: Int
    let a = px*(((1+(rx/100)))^tx)
    let c1 = a - px
    putStrLn ("Compund Interest: " ++ show(c1))
