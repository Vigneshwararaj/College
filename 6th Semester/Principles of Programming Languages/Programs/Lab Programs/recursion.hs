{-fact :: Int -> Int
fact 0=1
fact n = n* fact(n-1)

main = do
    #print(fact(5))-}

fact :: Int -> Int
fact n 
    |n==0 = 1 
    |n>0 = n* fact(n-1)
    |otherwise = fact(-n)

main = do
    print(fact(-5))    