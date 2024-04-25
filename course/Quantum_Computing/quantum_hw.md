# Quantum Computing Exercise  
Name: Yundong Li (999014301), Jiale Li(999014269), Mingxi Chen(999019482)
## 1. 
$$
\begin{aligned}
D_{\vec{n}}(\alpha) &= e^{-i\frac{\alpha}{2}\vec{n} \cdot \vec{\sigma}} =Icos(\frac{\alpha}{2})
-isin(\frac{\alpha}{2})\vec{n} \cdot \vec{\sigma} \\ 
\ 
[D_{\vec{n}}(\alpha)]^{\dagger} &= D_{\vec{n}}(-\alpha) = e^{i\frac{\alpha}{2}\vec{n} \cdot \vec{\sigma}} =Icos(\frac{\alpha}{2})
+isin(\frac{\alpha}{2})\vec{n} \cdot \vec{\sigma}\\
\
\rho^{\prime} &= [D_{\vec{n}}(\alpha)]\dagger \rho D_{\vec{n}}(\alpha) = D_{\vec{n}}(-\alpha)\rho D_{\vec{n}}(\alpha) = \frac{1}{2}[D_{\vec{n}}(-\alpha)](I + \vec{x}\cdot \vec{\sigma}) D_{\vec{n}}(\alpha) \\ 
\ 
&= \frac{1}{2}I + \frac{1}{2}(Icos(\frac{\alpha}{2})
+isin(\frac{\alpha}{2})\vec{n} \cdot \vec{\sigma}) (\vec{x} \cdot \vec{\sigma}) (Icos(\frac{\alpha}{2})
-isin(\frac{\alpha}{2})\vec{n} \cdot \vec{\sigma}) \\
\
&= \frac{1}{2}I + \frac{1}{2}[cos^2(\frac{\alpha}{2})\vec{x}\cdot \vec{\sigma} -isin(\frac{\alpha}{2})cos(\frac{\alpha}{2}) (\vec{x} \vec{\sigma} \cdot \vec{n} \vec{\sigma}) \\
\
&+ isin(\frac{\alpha}{2})cos(\frac{\alpha}{2})\vec{n}\cdot \vec{\sigma} \cdot \vec{x}\cdot \vec{\sigma} + sin^2(\frac{\alpha}{2})\vec{n} \vec{\sigma}  \cdot \vec{x} \vec{\sigma} \cdot \vec{n} \vec{\sigma}] \\
\
&= \frac{1}{2}I + \frac{1}{2}[cos^2(\frac{\alpha}{2})\vec{x}\cdot \vec{\sigma} +
isin(\frac{\alpha}{2})cos(\frac{\alpha}{2})(\vec{n} \vec{\sigma}\cdot\vec{x}\vec{\sigma}-\vec{x} \vec{\sigma} \cdot \vec{n} \vec{\sigma})+
sin^2(\frac{\alpha}{2})  \vec{n} \vec{\sigma} \cdot\vec{x} \vec{\sigma} \cdot\vec{n} \vec{\sigma}] =(*)\\
Let \ Q&=\vec{n} \vec{\sigma} \cdot \vec{x} \vec{\sigma} -\vec{x} \vec{\sigma}\cdot \vec{n} \vec{\sigma} = [\vec{n}\cdot \vec{\sigma},\vec{x}\cdot \vec{\sigma}] = 2i(\vec{n}\times\vec{x})\cdot \sigma,\\
\
(*)&= \frac{1}{2}I + \frac{1}{2}[cos^2(\frac{\alpha}{2})\vec{x}\cdot \vec{\sigma}  + isin(\frac{\alpha}{2})cos(\frac{\alpha}{2})Q+sin^2(\frac{\alpha}{2}) \vec{n}  \vec{\sigma} \cdot \vec{x}  \vec{\sigma} \cdot \vec{n}  \vec{\sigma}] \\
\
&= \frac{1}{2}I  +\frac{1}{2}(cos^2(\frac{\alpha}{2})\vec{x}\cdot \vec{\sigma} + isin(\frac{\alpha}{2})cos(\frac{\alpha}{2})(2i)\vec{n} \times\vec{x}\cdot \vec{\sigma} + sin^2(\frac{\alpha}{2})\vec{n}\vec{\sigma}\cdot \vec{x} \vec{\sigma} \cdot \vec{n} \vec{\sigma}) \\
\
&=\frac{1}{2}I + \frac{1}{2}[cos\alpha \vec{x} + (1-cos\alpha)\vec{n} \vec{x} \cdot \vec{n} - sin\alpha (\vec{n} \times \vec{x}) ]\cdot \vec{\sigma} \\
\
&= \frac{1}{2} + \frac{1}{2}\vec{y}\cdot \vec{\sigma}
\end{aligned}
$$
where $y = cos\alpha \vec{x} + (1-cos\alpha)(\vec{n}\vec{x} \cdot\vec{n}) -sin\alpha(\vec{n}\times \vec{x}) = O_{\vec{n}}\cdot \vec{x}$
and $
O_{\vec{n}(\alpha)} = \begin{bmatrix}
cos\alpha+ (1-cos\alpha){n_1}^2 & (1-cos\alpha){n_1}{n_2}+ sin\alpha{n_3}  &(1-cos\alpha）n_1 n_3 -sin\alpha{n_2} \\
(1-cos\alpha ) n_1 n_2 -sin\alpha n_3 & cos\alpha + (1-cos\alpha){n_2}^2 & (1-cos\alpha)n_2 n_3 + sin\alpha n_1 \\
(1-cos\alpha)n_1 n_3 + sin\alpha n_2 & (1-cos\alpha)n_2 n_3 - sin\alpha n_1 & cos\alpha + (1-cos\alpha){n_3}^2
\end{bmatrix}
$

## 2.

- (1) & (2) Reduced states and Schmidt form of $\rho_{A}, \rho_{B}$
In order to construct the basis of $|\psi \rangle \in \mathbb H^2 \times \mathbb H^2$ under the Schmidt decompostion, we can compute the reduced density operator of $|\psi\rangle$firstly:
$$|\psi\rangle = \frac{1}{\sqrt{3}}(|00\rangle + |01\rangle + |10\rangle)
\\
|\psi\rangle\langle\psi| = \frac{1}{3}(|00\rangle + |01\rangle + |10\rangle)(\langle00| + \langle01| + \langle10|)
\\
\rho_A = tr_B(|\psi\rangle\langle \psi|)={1\over3}(|0\rangle \langle 0|_A\otimes|0\rangle \langle 0|_B+|0\rangle \langle 0|_A\otimes|0\rangle \langle 1|_B+|0\rangle \langle 1|_A\otimes|0\rangle \langle 0|_B
\\
+|0\rangle \langle 0|_A\otimes|1\rangle \langle 0|_B+|0\rangle \langle 0|_A\otimes|1\rangle \langle 1|_B+|0\rangle \langle 1|_A\otimes|1\rangle \langle 0|_B 
\\
|1\rangle \langle 0|_A\otimes|0\rangle \langle 0|_B+|1\rangle \langle 0|_A\otimes|0\rangle \langle 1|_B+|1\rangle \langle 1|_A\otimes|0\rangle \langle 0|_B
$$
Since $tr_B(|i\rangle\langle j|) =\langle i|j \rangle = \delta_{ij}$ ,  
$$
\rho_A = \frac{1}{3} \begin{bmatrix}
2 & 1 \\
1 & 1
\end{bmatrix}
$$
Apply the same computatation to $\rho_B, \ \rho_{B}= \frac{1}{3} \begin{bmatrix}
2 & 1 \\
1 & 1
\end{bmatrix}$  .    
Let $\rho_A ,\rho_B $ be in the eigen-basis: $\rho_A=\sum_ip_i|i\rangle \langle i|,\ \rho_B=\sum_j p_j|j\rangle \langle j|$,
and considering = the fact that $\rho_A, \rho_B$ share common eigenvalues(that's: $p_i = p_j)$, it helps with the Schmidt form:  
$$|\psi\rangle = \sum_i \sqrt{p_i} |i_A\rangle |i_B\rangle 
$$
In this case, we get:

$$
\ \rho_A=\rho_B= 
\begin{cases}
p_1 = \frac{3+\sqrt5}{2},& |i_{p_1}\rangle = \begin{bmatrix} 1 \\ \frac{\sqrt5 -1}{2}\end{bmatrix}\\
p_2 = \frac{3-\sqrt5}{2},& |i_{p_2}\rangle = \begin{bmatrix} 1 \\ -\frac{\sqrt5 +1}{2}\end{bmatrix}
\end{cases}
$$
hence,$
|\psi\rangle = \frac{3+\sqrt5}{2}\cdot |i_{p_1}\rangle\otimes |i_{p_1}\rangle + \frac{3-\sqrt5}{2}\cdot |i_{p_2}\rangle\otimes |i_{p_2}\rangle $
$$
= \frac{3+\sqrt5}{2}\cdot  \begin{bmatrix} 1 \\ \frac{\sqrt5 -1}{2}\end{bmatrix}_A\otimes  \begin{bmatrix} 1 \\ \frac{\sqrt5 -1}{2}\end{bmatrix}_B + \frac{3-\sqrt5}{2}\cdot \begin{bmatrix} 1 \\ -\frac{\sqrt5 +1}{2}\end{bmatrix}_A\otimes \begin{bmatrix} 1 \\ -\frac{\sqrt5 +1}{2}\end{bmatrix}_B
$$
This is the Schmidt form of $\rho_{A}, \rho_{B}$ .
- (3)
$$
\def\r{\rangle}
\def\l{\langle}
\def\up{\uparrow}
\def\ot{\otimes}
\rho = \frac{1}{2}\begin{bmatrix}
1 & 1 & 1 & 0 \\
1 & 1 & 1 & 0 \\
1 & 1 & 1 & 0 \\
0 & 0 & 0 & 0 \\
\end{bmatrix},
\lambda_1 =\frac{3}{2} ,\lambda_{2,3,4} = 0 \\
Etr(\rho) = -tr(\rho log(\rho))= -tr(
    \frac{1}{2}\begin{bmatrix}
1 & 1 & 1 & 0 \\
1 & 1 & 1 & 0 \\
1 & 1 & 1 & 0 \\
0 & 0 & 0 & 0 \\
\end{bmatrix} 
\begin{bmatrix}
log\frac{3}{2} & 0 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 \\
\end{bmatrix}
)\\
=-\frac{3}{2}log\frac{3}{2}
$$


## 3. 
$\sigma_1|0\rangle = |1\rangle, \sigma_1|1\rangle = |0\rangle,  
\sigma_3|0\rangle = |0\rangle \\
\sigma_2|0\rangle = i|1\rangle,
\sigma_2|1\rangle = -i|0\rangle,
\sigma_3|1\rangle = -|1\rangle$
$
\vec{n_1} = (n_{11},n_{12},n_{13}),
\vec{n_2} = (n_{21},n_{22},n_{23})
$
$
\langle 0|F_1|0\rangle = n_{13} ,
\langle 0|F_2|0\rangle = n_{23} ,
\langle 1|F_2|1\rangle=-n_{23}\\
\langle 1|F_1|1\rangle = -n_{13},
\langle 1|F_1|0\rangle = n_{11}+in_{12},
\langle 1|F_2|0\rangle = n_{21} + in_{22}\\
\langle 0|F_2|1\rangle = n_{21}-in_{22}  ,
\langle 0|F_1|1\rangle = n_{11}-in_{12} 
$
$F_1 = \vec{n}_1\cdot \vec{\sigma}, F_2 = \vec{n}_2\cdot \vec{\sigma}$
$$
\def\r{\rangle}
\def\l{\langle}
\def\ot{\otimes}
\begin{aligned}
\langle F_1 \otimes F_2 \rangle _{|\psi\rangle} 
&= \langle \psi|  F_1 \otimes F_2 |\psi  \rangle 
= \frac{1}{\sqrt2} \langle \psi|  F_1 0\rangle \otimes F_2 1\rangle -\frac{1}{\sqrt2} \langle \psi |F_1 1\rangle \otimes F_2 0\rangle   \\
\ 
&= \frac{1}{2} \langle 01|F_1 0\otimes F_2 1\rangle -
\frac{1}{2} \langle 10|F_1 0\otimes F_2 1\rangle -
\frac{1}{2} \langle 01|F_1 1\otimes F_2 0\rangle +
\frac{1}{2} \langle 10|F_1 1\otimes F_2 0\rangle \\
&= \frac{1}{2} \langle 0|F_10\rangle \langle 1|F_21\rangle -
\frac{1}{2}\l 1|F_1 0\r \l 0|F_2 1\r -
\frac{1}{2}\l 0|F_1 1\r \l 1|F_2 0\r +
\frac{1}{2}\l 1|F_1 1\r \l 0|F_2 0\r \\
&= -\frac{n_{13}n_{23}}{2} - 
\frac{(n_{11}+in_{12})(n_{21}-in_{22})}{2}- 
\frac{(n_{11}-in_{12})(n_{21}+in_{22})}{2} + \frac{{-n_{13}}n_{23}}{2} \\
&= -n_{13}n_{23}-n_{11}n_{21}-n_{12}n_{22} = -\vec{n_1}\cdot \vec{n_2}
\end{aligned} 
$$

## 4.  
$$
\def\r{\rangle}
\def\l{\langle}
\def\up{\uparrow}
\def\ot{\otimes}
\l S_k\ot S_j\r_{|\psi\r}=\l \psi|S_k \ot S_j|\psi\r=\l \psi |S_k\ot S_j|\rho_1\ot \rho_2\r = \l\psi|S_k\rho_1\ot S_j\rho_2\r\\
=\l \rho_1\ot\rho_2|S_k\rho_1\ot S_j\rho_2\r =\l S_k\r_{|\rho_1\r}\cdot \l S_j\r_{|\rho_2\r}  \\
\forall \rho_1 \in \mathbb C^2 ,|\rho_1\r = e^{i\alpha}cos(\frac{\theta}{2})|0\r + e^{i\beta}sin(\frac{\theta}{2})|1\r \\
Suppose \ \exist \ |\up_{\vec{n}_{(\phi,\psi)}}  \r= e^{-i\frac{\phi}{2}}cos(\frac{\psi}{2})|0\r + e^{i\frac{\phi}{2}}sin(\frac{\psi}{2})|1\r, 
\ where \ \vec{n}_{(\phi,\psi)}=(sin\phi cos\psi,sin\phi sin\psi, cos\phi) \\
\ 
Finding \ \ m,\phi,\psi\  s.t.\ |\rho_1\r=e^{im}|\up_{\vec{n}_{\rho_1}}\r =  e^{im}(e^{-i\frac{\phi}{2}}cos(\frac{\psi}{2})|0\r+ e^{i\frac{\phi}{2}}sin\frac{\psi}{2}|1\r )\\
= e^{i(m-\frac{\phi}{2})}cos(\frac{\psi}{2})|0\r+e^{i(m+\frac{\phi}{2})}|1\r  \\
Since\ \ |\rho_1\r =  e^{i\alpha}cos(\frac{\theta}{2})|0\r + e^{i\beta}sin(\frac{\theta}{2})|1\r\\ 
\begin{cases}
e^{i(m-\frac{\phi}{2})}cos(\frac{\psi}{2})=e^{i\alpha}cos(\frac{\theta}{2} \\
e^{i(m+\frac{\phi}{2})}sin(\frac{\psi}{2})=e^{i\beta }sin(\frac{\theta}{2} 
\end{cases}
\Rightarrow
\begin{cases}
\psi = \theta\\
m-\frac{\phi}{2} = \alpha \\
m+\frac{\phi}{2} = \beta
\end{cases} 
\Rightarrow
\begin{cases}
\psi = \theta\\
m = \frac{\alpha+\beta}{2} \\
\phi = -\alpha +\beta  
\end{cases} \\
\\ Similar\  process\  for\  \rho_2
\Rightarrow 
\begin{cases}
|\rho_1\r = e^{i(\frac{\alpha+\beta}{2})} |\up_{\vec{n}_{\rho_1}} \r ,
\ where\ |\up_{\vec{n}_{\rho_1}} \r = |\up_{\vec{n}_{-\alpha+\beta,\theta}} \r\\
|\rho_2\r = e^{i(\frac{\alpha+\beta}{2})} |\up_{\vec{n}_{\rho_2}} \r ,
\ where\ |\up_{\vec{n}_{\rho_2}} \r = |\up_{\vec{n}_{-\alpha+\beta,\theta}} \r
\end{cases}\\
k \in \{1,4\}, \l S_k\r_{|\rho_1\r}=\l\rho_1|\vec{n}_k\cdot\vec{\sigma} |\rho_1\r
= \l\up \vec{n}_{\rho_1}|\vec{n}_k\cdot\vec{\sigma} |\up_{\vec{n}_{\rho_1}}  \r
\ \ \ \ \ (*1)\\ 
\ 
Since\  |\up_{\vec{n}_{\rho_2}}  \r \ is\ eigenvector\ with\ eigenvalue\ 1\ of\ Hermitian\  (\vec{n}_{\rho_1}\cdot \vec{\sigma})  \\
(*1) = \l (\vec{n}_{\rho_1}\vec{\sigma} )\up_{\vec{n}_{\rho_1}}|\vec{n}_k \cdot\vec{\sigma}|\vec{n}_{\rho_1}\cdot \vec{\sigma}\up_{\vec{n}_{\rho_1}} \r = \vec{n}_{\rho_1}\cdot\vec{n}_k \Rightarrow 
\begin{cases}
\l S_k \r_{|\rho_1\r} = \vec{n}_{\rho_1}\cdot \vec{n}_{k} \\
\l S_j \r_{|\rho_2\r} = \vec{n}_{\rho_2}\cdot \vec{n}_{j} \\
\end{cases}
\\
|\l S_1\ot S_2\r -\l S_1\ot S_3\r +\l   S_4\ot S_2\r +\l S_4\ot S_3\r | \\
= |(\vec{n}_{\rho_1}\cdot \vec{n}_{1})(\vec{n}_{\rho_2}\cdot \vec{n}_{2} - \vec{n}_{\rho_2}\cdot \vec{n}_{3}) +
(\vec{n}_{\rho_1}\cdot \vec{n}_{4})(\vec{n}_{\rho_2}\cdot \vec{n}_{2} + \vec{n}_{\rho_2}\cdot \vec{n}_{3})| = (*2) \\ 
\because |\vec{n}_{\rho_1}|\leq 1,|\vec{n}_1| \leq 1, |\vec{n}_{\rho_1}\cdot \vec{n}_{1}| = |\vec{n}_{\rho_1}||\vec{n}_{1}|\cdot cos\theta \\
\therefore (*2) \leq |\vec{n}_{\rho_2}\cdot \vec{n}_{2} - \vec{n}_{\rho_2}\vec{n}_{3}| + |\vec{n}_{\rho_2}\cdot \vec{n}_{\rho_2} + \vec{n}_{\rho_2}\cdot \vec{n}_{3}| = (*3)\\
Let\ \ \begin{cases}
A = \vec{n}_{\rho_2}\cdot \vec{n}_{2}\\
B = \vec{n}_{\rho_2}\cdot \vec{n}_{3}
\end{cases}, 
(*3) = |A-B|+|A+B|,\ |A|,|B| \leq 1\\
\begin{cases}
A\gt B ,A+B \gt 0. (*3) =A-B+A+B=2A \leq 2 \\
A\lt B ,A+B \gt 0. (*3) =B-A+A+B=2B \leq 2 \\
A\gt B ,A+B \lt 0. (*3) =A-B-A-B=-2B \leq 2 \\
A\lt B ,A+B \lt 0. (*3) =B-A-A-B=-2A \leq 2 \\
\end{cases}\\
\Rightarrow |\l S_1\ot S_2\r -\l S_1\ot S_3\r +\l   S_4\ot S_2\r +\l S_4\ot S_4\r | \leq 2
$$ 

