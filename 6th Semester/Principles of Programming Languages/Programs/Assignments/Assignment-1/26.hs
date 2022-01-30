import Text.Read
isVowel :: Char -> IO()
isVowel c
    | c == '1' = print "One"      
    | c == '2' = print "Two" 
    | c == '3' = print "Three"      
    | c == '4' = print "Four" 
    | c == '5' = print "Five"      
    | c == '6' = print "Six" 
    | c == '7' = print "Seven"      
    | c == '8' = print "Eight"
    | c == '9' = print "Nine"      
    | c == '0' = print "Zero"  
    

main = do
    putStrLn "Enter The Number"
    num <- getChar
    isVowel num
