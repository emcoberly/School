# Python function to estimate pi
def estimatePi(terms):
  if ( terms <= 0 ): return 0.0
  val = 4.0 / (2*terms - 1)
  if (terms % 2 == 0): val *= -1
  return val + estimatePi(terms-1)
  
# Function to test estimatePi
def testEstimatePi():
  vals = [ -1, 0, 1, 2, 10, 100 ]
  for i in vals: print i, estimatePi(i)
  
testEstimatePi()
