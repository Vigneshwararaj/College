leaveUntil :: Num x => (x -> Bool) -> [x] -> [x]

main = do
    print(leaveUntil (< 5) [10, 7, 4, 1])
    print(leaveUntil (\x -> x `rem` 2 == 0) [1..10])
    print(leaveUntil (== 0) [])