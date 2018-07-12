func checkPalindrome(inputString: String) -> Bool {
    let revers = String(inputString.characters.reversed());
    if inputString == revers { return true; } else { return false; }
}