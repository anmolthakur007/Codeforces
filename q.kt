fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val n = readLine()!!.toInt()
        val a = readLine()!!.split(" ").map { it.toInt() }

        var minSoFar = Int.MAX_VALUE
        val bad = mutableListOf<Int>()

        for (i in a.indices) {
            if (a[i] > minSoFar) {
                bad.add(i + 1)
            }
            minSoFar = minOf(minSoFar, a[i])
        }

        println(bad.size)
        if (bad.isNotEmpty()) {
            println(bad.joinToString(" "))
        }
    }
}
