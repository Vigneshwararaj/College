pno :: Int -> [Char]
pno a 
    |(a>0)="Positive"
    |(a<0) = "Negative"
    |otherwise = "Zero"
main = do
    a <- readLn
    print(pno a)   