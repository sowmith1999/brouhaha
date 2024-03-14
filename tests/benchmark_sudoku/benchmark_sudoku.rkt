#lang racket

(define (ll) (list (list 0 1 2) (list 3 4 5) (list 6 7 8)))

(define (get-element brd i j)
  (list-ref (list-ref brd i) j))

(define (generate-pairs rr cc)
  (foldr (lambda (r acc)
           (append (map (lambda (c) (list r c)) cc) acc))
         (list)
         rr))

(define (access-elements rr cc brd)
  (map (lambda (pair)
         (get-element brd (car pair) (car (cdr pair))))
       (generate-pairs rr cc)))


; subfn to get list of numbers in 3x3 subgrid for a given row and column position: 
(define (subgrid brd r c)  
  ; get row/column set to which r and c belong:
  (let ([rr (flatten (filter (lambda (x) (member r x)) (ll)))]
        [cc (flatten (filter (lambda (x) (member c x)) (ll)))])
    (access-elements rr cc brd)))

; create a new board with i added:
(define (newbd brd r c i)
  (list-set brd r
            (list-set (list-ref brd r) c i)))

(define (solve-board brd r c lst result)
  (cond
    [(equal? result 'solved) result]
    [(null? lst) result]
    [(and (not (member (car lst) (list-ref brd r)))                 ; number not in row
          (not (member (car lst) (map (lambda (x) (list-ref x c)) brd))) ; number not in column
          (not (member (car lst) (subgrid brd r c))))
     
     (solve-board brd r c (cdr lst)
                  (let ([newbrd (newbd brd r c (car lst))])
                    (cond
                      ; go to next column and loop:
                      [(< (+ 1 c) 9)
                       (SolveSudoku newbrd r (+ 1 c) )]
                      ; if columns over, go to next row and loop:
                      [(< (+ 1 r) 9)
                       (SolveSudoku newbrd (+ 1 r) 0 )]
                      ; if rows also over, solution found:
                      [else 'solved]
                      )))]
    [else (solve-board brd r c (cdr lst) result)]))

(define (SolveSudoku brd r c)
  ; start with sent board and first row and column: 
  (cond
    ; if entry at (r,c) is 0, try to put numbers from 1 to 9:
    [(= 0 (list-ref (list-ref brd r) c))
     (solve-board brd r c (list 1 2 3 4 5 6 7 8 9) 'unsolved)]
    ; if entry is not 0 go to next column or row (as above): 
    [(< (+ 1 c) 9)
     (SolveSudoku brd r (+ 1 c))]
    [(< (+ 1 r) 9)
     (SolveSudoku brd (+ 1 r) 0)]
    [else 'solved]))


(define (board)                   
  (list 
    (list 0 0 3 0 2 0 6 0 0)
    (list 9 0 0 3 0 5 0 0 1)
    (list 0 0 1 8 0 6 4 0 0)
    (list 0 0 8 1 0 2 9 0 0)
    (list 7 0 0 0 0 0 0 0 8)
    (list 0 0 6 7 0 8 2 0 0)
    (list 0 0 2 6 0 9 5 0 0)
    (list 8 0 0 2 0 3 0 0 9)
    (list 0 0 5 0 1 0 3 0 0)))

(define (brouhaha_main)
  (SolveSudoku (board) 0 0))
  
(brouhaha_main)