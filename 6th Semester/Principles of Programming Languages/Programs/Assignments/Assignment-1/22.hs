di::Int->[Char]
di n
    | mod n 7==0 ="Yes Divisible by 7"
    | otherwise = "No"
    
main::IO()
main=do
    a <- readLn
    print(di a)