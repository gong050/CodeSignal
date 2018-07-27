func matrixElementsSum(matrix: [[Int]]) -> Int {
    var sum = 0
    var copyMatrix = matrix
    for i in 0..<copyMatrix.count {
        for j in 0..<copyMatrix[i].count {
            if copyMatrix[i][j] != 0 {
                sum += copyMatrix[i][j]
            } else {
                for k in i..<copyMatrix.count {
                    copyMatrix[k][j] = 0
                }
            }
        }
    }
    return sum
}
