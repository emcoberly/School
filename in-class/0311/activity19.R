# R function to estimate pi using a given number of terms
estimatePi <- function(terms) {
  if ( terms <= 0 ) { return(0.0) }      # check for bad inputs
  -1.0 -> numerator
   0.0 -> pi
  for ( i in seq(0,terms-1,1) ) {        # loop from 0 to terms-1
    numerator   <- -numerator
    denominator <- 2*i + 1
    pi          <- pi + numerator / denominator
  }
  return(4*pi)
}

# R function to test the estimatePi() function above
testEstimatePi <- function() {
  vals <- c( -1, 0, 1, 2, 10, 100 )
  for ( i in vals ) { cat(i, estimatePi(i), "\n") }
}

testEstimatePi()                         # Run the test function
