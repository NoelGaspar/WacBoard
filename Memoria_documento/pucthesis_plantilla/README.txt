pucthesis Package v. 1.3 2011.01.20 MTT

This distribution of pucthesis includes:

--- Auxiliary Packages ---
algorithm2e.sty
fancybox.sty
setspace.sty

--- pucthesis Document Class Files ---
pucthesis.cls   
pucthesis.sty % * obsolete *
logouc_23x30p38mm.ps
logouc_23x30p38mm.pdf

--- pucthesis Template Files ---
pucthesis_template.tex
pucthesis_template.pdf

--- pucthesis Sample Files ---
pucthesis_sample.tex
pucthesis_sample.pdf
/figs/bsr3b2c_eig.ps
/figs/bsr3b2cfan.ps
/figs/bsr3x.ps
/figs/vitruvian.ps
README.txt

------------------------------
1. Introduction
The PUC Thesis document style for LaTeX requires the 
following files:

- pucthesis.cls (included with this distribution)
- apacite.sty (must be installed as part of your TeX system)

Additionally, if you need to include algorithms and special
boxes or frames in your manuscript, it is suggested that
you use:
- algorithm2e.sty
- fancybox.sty packages

Using these packages is not compulsory, but may prove useful.
These packages are included here because they are required 
by the examples.
 
2. Installing:
It is assumed that you have a working standard installation
of:
- The TeX/LaTeX system
- Ghostscipt/Ghostview
- Some editor such as Emacs+AUCTeX, WinEdit, etc.

The installed TeX/LaTeX system must include the following 
packages in addition to those included with this distribution:
 
 Minimum pre-requisites of the pucthesis class:
 =============================================
 - class:    amsbook
 - packages: setspace.sty, graphicx.sty, apacite.sty
 
 Package pre-requisites of the pucthesis_template:
 ================================================
 - amsmath, amsfonts, amssymb, times

 Package pre-requisites of the pucthesis_sample:
 ================================================
 - amsmath, amsfonts, amssymb, times
 - algorithm2e, fancybox
 - float, xspace (required by algorithm2e)

* Required packages not included with this distribution
  are usually part of the standard TeX/LaTeX installation.
  If your system does not include them, you must add them
  before compiling this distribution.

Unzip the distribution to any directory.  No additional
steps are required.

3. Compiling the Examples:
Change the directory to where the source files are located.

From a DOS command window execute:
   make.bat
From a Unix shell execute:
   make
------------------------------
