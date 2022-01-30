import Text.Read
isVowel :: Char -> IO()
isVowel c
    | c == 'a'
      || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'
    = print "Vowel"
    | c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0' = print "Number"
    | otherwise = print "Consonants"

main = do
    a <- getChar
    isVowel a
