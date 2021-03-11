; Scheme function to estimate pi
(define estimatePi
  (lambda (terms)
    (if (<= terms 0)
      0
      (+ (estimatePi (- terms 1))
        (/ (if (odd? terms) +4 -4)
          (+ terms terms -1)
          )))))
        
; Function to test estimatePi
(define testEstimatePi
  (lambda ()
    (define vals `(-1 0 1 2 10 100))
    (map estimatePi vals)   
  ))
  
(testEstimatePi)
