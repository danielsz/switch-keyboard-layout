#! /usr/bin/csi -script
(require-extension s)
(use shell)

(if (not (string-null? (get-environment-variable "BLOCK_BUTTON")))
    (run "/usr/local/bin/xkb-switch -n"))

(let ((layout (s-upcase (capture "/usr/local/bin/xkb-switch"))))
  (display layout))


