oe::Int->[Char]
oe n
    | mod n 2==0 ="Even"
    | otherwise = "Odd"
    
main::IO()
main=do
    a <- readLn
    print(oe a)