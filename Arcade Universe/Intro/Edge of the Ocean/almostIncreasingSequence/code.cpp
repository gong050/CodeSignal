var counter = 0;
func almostIncreasingSequence(sequence: [Int]) -> Bool {
    var copySequence = sequence
    var found = false
    for i in 1..<copySequence.count {
        if copySequence[i] <= copySequence[i - 1] {
            if found { return false }
            found = true
            
            if i == 1 || i + 1 == copySequence.count {
                continue
            }
            else if copySequence[i] > copySequence[i - 2] {
                copySequence[i - 1] = copySequence[i - 2]
            }
            else if copySequence[i - 1] >= copySequence[i + 1] {
                return false
            }
        }
    }
    return true
}
