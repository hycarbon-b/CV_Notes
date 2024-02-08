
## 非标准基表示线性算子

考虑一个二维向量空间，我们通常使用标准正交基，但现在，让我们选择一个非标准基：

$$ b_1 = \begin{bmatrix}1 \\ 1\end{bmatrix}, \quad b_2 = \begin{bmatrix}1 \\ -1\end{bmatrix} $$

这组向量是线性无关的，因此它们可以作为基。

设有一个线性算子 ( T ) 定义为：

$$ T\begin{bmatrix}x \\ y\end{bmatrix} = \begin{bmatrix}3x + y \\ x + 2y\end{bmatrix} $$

我们的目标是找出这个算子在非标准基 $\{b_1, b_2\}$ 下的矩阵表示。

首先，我们计算 $T$ 作用在基向量 $\{b_1, b_2\}$上的结果：

$$ T(b_1) = T\begin{bmatrix}1 \\ 1\end{bmatrix} = \begin{bmatrix}3 \cdot 1 + 1 \\ 1 + 2 \cdot 1\end{bmatrix} = \begin{bmatrix}4 \\ 3\end{bmatrix} $$

$$ T(b_2) = T\begin{bmatrix}1 \\ -1\end{bmatrix} = \begin{bmatrix}3 \cdot 1 - 1 \\ 1 - 2\end{bmatrix} = \begin{bmatrix}2 \\ -1\end{bmatrix} $$

现在我们需要将 $T(b_1) ,T(b_2) $ 用我们选定的非标准基 $\{b_1, b_2\}$表示。

为了表示 $ T(b_1) $，我们需要找到系数 $c_1$ 和 $c_2$ 使得：

$$ \begin{bmatrix}4 \\ 3\end{bmatrix} = c_1 \begin{bmatrix}1 \\ 1\end{bmatrix} + c_2 \begin{bmatrix}1 \\ -1\end{bmatrix} $$

解这个线性方程组，我们得到 $ c_1 = \frac{7}{2} $ 和$c_2 = \frac{1}{2} $。

同样，为了表示 $ T(b_2) $，我们需要找到系数 $d_1 $ 和$ d_2 $ 使得：

$$ \begin{bmatrix}2 \\ -1\end{bmatrix} = d_1 \begin{bmatrix}1 \\ 1\end{bmatrix} + d_2 \begin{bmatrix}1 \\ -1\end{bmatrix} $$

解这个方程组，我们得到 $ d_1 = \frac{1}{2} $ 和 $d_2 = \frac{3}{2} $。

因此，算子 $T $在基 $ \{b_1, b_2\} $ 下的矩阵表示是：

$$ [T]_{{b_1, b_2}} = \begin{bmatrix}c_1 & d_1 \\ c_2 & d_2\end{bmatrix} = \begin{bmatrix}\frac{7}{2} & \frac{1}{2} \\ \frac{1}{2} & \frac{3}{2}\end{bmatrix} $$


## 迹算子  

算子的矩阵迹是一个重要的概念，它在多个数学和物理学领域中都有应用。矩阵的迹定义为其对角元素的和，记为 $ \text{tr}(A) $。对于一个线性算子 ( A ) 的矩阵表示，迹的计算可以通过以下几个性质来进行拆解：

线性性：迹运算是线性的，这意味着对于任意两个矩阵$ A $和 $ B $以及任意标量 $c$，有 $$ \text{tr}(A + B) = \text{tr}(A) + \text{tr}(B) $$ $$ \text{tr}(cA) = c \cdot \text{tr}(A) $$

循环置换性：对于矩阵的乘积，迹具有循环置换性，这意味着对于任意两个矩阵 $ A $ 和 $ B $，有 $$ \text{tr}(AB) = \text{tr}(BA) $$ 这个性质可以推广到多个矩阵的乘积： $$ \text{tr}(ABC) = \text{tr}(BCA) = \text{tr}(CAB) $$ 但请注意，矩阵乘法本身不是交换的，即 $ AB $ 不一定等于 $ BA $。

对角矩阵：如果矩阵 $ A $ 是对角矩阵，那么其迹就是对角线上元素的和： $$ A = \text{diag}(\lambda_1, \lambda_2, \ldots, \lambda_n) $$ $$ \text{tr}(A) = \sum_{i=1}^{n} \lambda_i $$

相似矩阵：如果两个矩阵 $A $ $ B $ 是相似的，即存在可逆矩阵 $ P $ 使得 $ A = PBP^{-1} $，那么他们的迹相等： $$ \text{tr}(A) = \text{tr}(PBP^{-1}) = \text{tr}(BP^{-1}P) = \text{tr}(B) $$






在数学中，特别是在泛函分析和量子力学领域，可以考虑一个有限维向量空间上的线性算子 ( A ) 的迹，这个算子的迹可以使用内积来表示。这种表示方法在处理算子的迹时非常有用，尤其是在量子力学中，其中态矢量和算子通常在希尔伯特空间中定义，而希尔伯特空间是一个具有内积结构的完备向量空间。

假设 ( A ) 是一个有限维希尔伯特空间 ( $\mathcal{H}$ ) 上的线性算子，并且 $( {\phi_i}{i=1}^n ) $是这个空间的一个标准正交基（即，对于所有的 ( i ) 和 ( j )，$( \langle \phi_i, \phi_j \rangle = \delta{ij})$，其中$ ( \delta_{ij} ) $是克罗内克函数，当 $ i = j $ 时为1，否则为0）。那么 ( A ) 的迹可以表示为这个基下的内积之和：

$$ \text{tr}(A) = \sum_{i=1}^n \langle \phi_i, A\phi_i \rangle $$

这个表达式说明了算子 $ A $ 的迹可以看作是算子在该标准正交基下的对角元素的内积之和。在量子力学中经常使用这种表示方法，因为它与测量的期望值和算子的物理解释紧密相关。

例如，考虑量子力学中的密度算子 ( $\rho $)，它是一个描述量子系统状态的算子，并且是自伴的（即 ( $\rho = \rho^\dagger$ )），正定的，且有单位迹。一个物理可观测量由一个自伴算子 $ O $ 表示，其期望值可以用迹来表达：

$$ \langle O \rangle = \text{tr}(\rho O) $$

这个期望值本质上是  $\rho$  和 $ O $ 的积的迹，它可以用内积的形式来计算。

需要注意的是，尽管在有限维空间中迹的内积表示是非常直观的，但在无限维希尔伯特空间中，迹的概念和计算可能会更加复杂，特别是当涉及到无界算子时。在这种情况下，可能需要使用迹类算子或者其他泛函分析中的工具来合理定义和计算迹。


## 密度算子


密度算子（Density Operator）： 为了数学上描述混合态，我们使用密度算子。密度算子是一个自伴（Hermitian）算子，用于描述量子系统的统计性质。它包含了表示系统可能处于的所有纯态及其相应概率的信息。一个密度算子通常表示为ρ（rho），并且可以通过下面的表达式定义：

$$ \rho = \sum_i p_i |\psi_i\rangle\langle\psi_i| $$

在这里，$|\psi_i\rangle$是系统可能处于的纯态，$p_i$是系统处于对应纯态的概率，且$\sum_i p_i = 1$。每一项$|\psi_i\rangle\langle\psi_i|$称为态的投影算子，它代表了系统在纯态$|\psi_i\rangle$的概率密度。

## Bell Basis 及其密度算子
The four Bell states are defined as follows:

$$
( | \Phi^{+} \rangle = \frac{1}{\sqrt{2}} (| 00 \rangle + | 11 \rangle) )\\
( | \Phi^{-} \rangle = \frac{1}{\sqrt{2}} (| 00 \rangle - | 11 \rangle) )\\
( | \Psi^{+} \rangle = \frac{1}{\sqrt{2}} (| 01 \rangle + | 10 \rangle) )\\
( | \Psi^{-} \rangle = \frac{1}{\sqrt{2}} (| 01 \rangle - | 10 \rangle) )
$$


要用密度算子表示Bell基态，我们首先需要知道每个Bell基态的形式，然后构造出与每个纯态对应的投影算子。一个纯态的密度算子可以通过外积形式表示，即一个态向量与其自身的共轭转置的乘积。

($ | \Phi^{+} \rangle $) 的密度算子: 
$$ \rho_{\Phi^{+}} = | \Phi^{+} \rangle \langle \Phi^{+} | = \frac{1}{2} (| 00 \rangle + | 11 \rangle)(\langle 00 | + \langle 11 |) $$


