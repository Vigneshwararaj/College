maxi :: Int -> Int ->Int -> Int
maxi a b c
    |(a>=b && a>=c)=a
    |(b>=a && b>=c) = b
    |otherwise = c
main = do
    print(maxi 4 3 2)