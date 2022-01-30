getDouble :: IO Int--user defined function
getDouble = readLn

sq :: Int -> IO()
sq s =
    if s>0 then print "Real Roots"
    else if s<0 then print "Imaginary Roots"
    else print "Equal Roots"
main = do    
    putStrLn "Enter The Value of A"
    a <- readLn
    putStrLn "Enter The Value of B"
    b <- readLn
    putStrLn "Enter The Value of C"
    c <- readLn
    putStrLn ("")
    let s = b*b - 4*a*c
    sq s
