'((proc (lam3386 env3387 y)
        (let ([kont3382 (env-ref env3387 2)]) (let ([x (env-ref env3387 1)]) (clo-app kont3382 x))))
  (proc (lam3388 env3389 x)
        (let ([kont3382 (env-ref env3389 2)])
          (let ([num2 (env-ref env3389 1)])
            (let ([f3383 (make-closure lam3386 x kont3382)]) (clo-app f3383 num2)))))
  (proc (prov (define (call num1 num2)
                (let ([x num1] [y num2]) x)))
        (call _3390 kont3382 num1 num2)
        (let ([f3384 (make-closure lam3388 num2 kont3382)]) (clo-app f3384 num1)))
  (proc (prov (define (brouhaha_main)
                (call '5 '42)))
        (brouhaha_main _3393 kont3385)
        (let ([a3380 '5])
          (let ([a3381 '42]) (clo-app app (prov (call '5 '42)) call kont3385 a3380 a3381)))))


'("closure")
'("closure")
'("closure")
'("closure")
'("closure")
'("closure")
5