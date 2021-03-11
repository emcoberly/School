/* JavaScript function to estimate pi using a given number of terms */
function estimatePi(terms) {
  if (terms <= 0) { return 0.0; }      // check for bad inputs
  var numerator = -1.0;
  var pi        = 0.0;
  for ( var i = 0; i < terms; i++ ) {  // loop from 0 to terms-1
    numerator   *= -1;
    denominator  = 2*i + 1;
    pi          += numerator/denominator;
  }
  return 4*pi;
}

/* JavaScript function to test the estimatePi() function above */
function testEstimatePi() {
  var vals = [ -1, 0, 1, 2, 10, 100 ];
  for (var i = 0; i < vals.length; i++ ) {
    console.log( vals[i] + " " + estimatePi(vals[i]) );
  }
}

testEstimatePi();                      // Run the test function