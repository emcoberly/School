# Python function to estimate pi using a given number of terms
def estimatePi(terms):
  if ( terms <= 0 ): return(0.0)  # check for bad inputs
  numerator = -1.0
  pi        = 0.0
  for i in range(0,terms,1):      # loop from 0 to terms-1
    numerator   *= -1
    denominator  = 2*i + 1
    pi          += numerator/denominator
  return(4*pi)
    
# Python function to test the estimatePi() function above
def testEstimatePi():
  vals = [ -1, 0, 1, 2, 10, 100 ]
  for i in vals: print i, estimatePi(i)
  
testEstimatePi()                 # Run the test function