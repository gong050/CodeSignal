func commonCharacterCount(s1: String, s2: String) -> Int {
    var result = 0
    var copyFirstString = Array(s1.characters)
    var copySecondString = Array(s2.characters)
    for i in 0..<copyFirstString.count {
        for j in 0..<copySecondString.count {
            if copyFirstString[i] == copySecondString[j] {
                result += 1;
                copySecondString.remove(at: j)
                break
            }
        }
    }
    return result
}
