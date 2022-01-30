mygcd :: Num a => (a, a) -> a
mygcd (a, b) = a + b 

mygcd1 :: Num a => (a, a) -> a
mygcd1 (a, b) = a - b 

mygcd2 :: Num a => (a, a) -> a
mygcd2 (a, b) = a * b 

divi :: Int -> Int -> Int
divi x y = x `div` y

modu :: Int -> Int -> Int
modu x y = x `mod` y



main = do
  a <- readLn
  b <- readLn
  print $ mygcd (a, b)
  print $ mygcd1 (a, b)
  print $ mygcd2 (a, b)
  print (divi a b)
  print( modu a b)

  
  