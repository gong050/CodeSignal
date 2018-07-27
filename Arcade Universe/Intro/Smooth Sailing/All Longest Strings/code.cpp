func allLongestStrings(inputArray: [String]) -> [String] {
    var result: [String] = []
    var hightLength = 0
    for i in 0..<inputArray.count {
        if inputArray[i].characters.count > hightLength {
            hightLength = inputArray[i].characters.count
        }
    }
    for i in 0..<inputArray.count {
        if inputArray[i].characters.count == hightLength {
            result.append(inputArray[i])
        }
    }
    return result
}
