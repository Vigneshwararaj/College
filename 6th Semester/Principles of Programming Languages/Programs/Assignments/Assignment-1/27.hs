isVowel :: Double -> IO()
isVowel c
    | c >= 80 = print "A"      
    | c >= 70 = print "B"   
    | c >= 60 = print "C"   
    | c >= 50 = print "D"   
    | c < 40 = print "F"       
   

main = do
    putStrLn "Enter Mark 1"
    n1 <- readLn
    putStrLn "Enter Mark 2"
    n2 <- readLn
    putStrLn "Enter Mark 3"
    n3 <- readLn
    let n4 = (n1+n2+n3)/3
    isVowel n4
