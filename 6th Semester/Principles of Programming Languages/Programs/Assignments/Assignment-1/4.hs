main = do
    print("Enter temp in celcius")
    x <- readLn
    print((x - 32) * (5/9))