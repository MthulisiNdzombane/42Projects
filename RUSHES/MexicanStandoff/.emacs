(setq backup-directory-alist `(("." . "~/.emacs.d")))
(setq c-default-style "bsd")
(setq c-auto-newline t)
(column-number-mode 1)
(line-number-mode 1)
(load-library "paren")
      (show-paren-mode 1)
(electric-pair-mode 1)
(setq show-trailing-whitespace t)
(custom-set-variables '(show-trailing-whitespace t))
(setq show-whitespace t)
(add-hook 'c-mode-common-hook (lambda ()
								(highlight-regexp "\s\s")))
