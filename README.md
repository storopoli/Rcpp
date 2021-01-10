# Rcpp

[![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]


Ok, você quer fazer o seu código R rodar mais rápido? Já pensou em colocar partes do seu código em C++?

![12-parsecs](images/12-parsecs.gif)


## Índice

Acesse o site dos tutoriais em [storopoli.io/Rcpp](http://storopoli.io/Rcpp)

1. [Por que C++? R não é suficiente?](http://storopoli.io/Rcpp/1-Porque_CPP.html)
2. [Como incorporar C++ no R -- `{Rcpp}`](http://storopoli.io/Rcpp/2-Rcpp.html)
3. [Manipulação de Matrizes -- `{RcppEigen}` e `{RcppArmadillo}`](http://storopoli.io/Rcpp/3-RcppEigen_RcppArmadillo.html)
4. [Paralelização -- `{RcppParallel}`](http://storopoli/.io/Rcpp/4-RcppParallel.html)
5. [`{cpp11}` -- Nova Interface do pessoal do RStudio](http://storopoli.io/Rcpp/5-cpp11.html)

## Como Configurar um Ambiente para `{Rcpp}`

Claro, que primeiro você deve instalar o [R pelo CRAN](https://cran.r-project.org).

* **Linux**: Instale a versão desenvolvedor do R com `sudo apt-get install r-base-dev` ou similar
* **MacOS**: Instale o Xcode da App Store e execute o comando `xcode-select --install` para instalar o Xcode Command Line Tools
* **Windows**: Instale o [Rtools](https://cran.r-project.org/bin/windows/Rtools/)

## Autor

* [Prof. Dr. José Eduardo Storopoli](https://storopoli.io) - [Currículo *Lattes*](http://lattes.cnpq.br/2281909649311607) - [ORCID](https://orcid.org/0000-0002-0559-5176) - [josees@uni9.pro.br](mailto:josees@uni9.pro.br)

## Como citar esse conteúdo

Para citar o conteúdo use:

```
Storopoli (2021). Rcpp - A interface entre R e C++. Disponível em: https://storopoli.github.io/Rcpp
```

Ou em formato BibTeX para LaTeX:

```
@misc{storopoli2021rcpp,
  author = {Storopoli, Jose},
  title = {Rcpp - A interface entre R e C++},
  url = {https://storopoli.github.io/Rcpp},
  year = {2021}
}
```

## Licença

Este obra está licenciado com uma Licença
[Creative Commons Atribuição-CompartilhaIgual 4.0 Internacional][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
