package benchmarkFib

import (
	"testing"
)

func BenchmarkFib20(b *testing.B) {
	for n := 0; n < b.N; n++ {
		Fib(20)
	}
}
