max1 :: Int -> Int ->Int -> Int
max1 a b c
    |(a>=b && a>=c)=a
    |(b>=a && b>=c) = b
    |otherwise = c
main = do
    a<- readLn
    b<- readLn
    c<- readLn
    print(max1 a b c)