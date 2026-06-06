Um arquivo .obj (Wavefront OBJ) é um arquivo de texto simples (ASCII) que descreve a geometria tridimensional de um objeto. Cada linha do ficheiro representa um elemento específico do modelo 3D, identificada por um prefixo (letra ou símbolo) no início da linha. [1] 
Abaixo está a decomposição detalhada de como cada componente funciona na estrutura bruta (raw) do ficheiro:
## 1. Elementos Geométricos Básicos

* v (Vertex - Vértice): Define as coordenadas espaciais 3D (X, Y, Z) de um ponto no espaço.
* Exemplo: v 1.000000 -1.000000 -1.000000
* vt (Vertex Texture - Coordenadas de Textura): Define o mapeamento UV (U, V e opcionalmente W) para colar uma imagem 2D no modelo 3D. Os valores variam geralmente entre 0.0 e 1.0.
* Exemplo: vt 0.748573 0.750412
* vn (Vertex Normal - Normais dos Vértices): Define a direção para onde o vértice está a "apontar" (vetor X, Y, Z). Isto indica ao Blender como a luz deve refletir na superfície (suave ou facetada).
* Exemplo: vn 0.000000 1.000000 0.000000

## 2. A Estrutura das Faces (f)
O comando f (Face) une os vértices criados anteriormente para formar superfícies (polígonos, como triângulos ou quadriláteros). O .obj utiliza o índice (posição na lista) de cada elemento.
A sintaxe de cada vértice dentro de uma face segue o formato Vértice/Textura/Normal:

* Apenas Geometria: f 1 2 3 (Une os vértices 1, 2 e 3).
* Geometria e Textura: f 1/1 2/2 3/3 (Vértice 1 usa a textura 1, e assim por diante).
* Geometria, Textura e Normal: f 1/1/1 2/2/2 3/3/3 (Formato completo mais comum).
* Sem Textura, com Normal: f 1//1 2//2 3//3 (Usa duas barras seguidas para omitir a textura).

## 3. Organização e Materiais

* o (Object - Nome do Objeto): Define o início de um novo modelo 3D distinto dentro do mesmo ficheiro.
* Exemplo: o Cubo_Cozinha
* g (Group - Grupo): Agrupa subpartes de um objeto (útil para organizar peças de um carro, por exemplo).
* Exemplo: g Roda_Esquerda [2] 
* mtllib (Material Library - Biblioteca de Materiais): Indica o nome do ficheiro externo .mtl que guarda as cores, brilhos e caminhos das imagens de textura.
* Exemplo: mtllib meu_modelo.mtl
* usemtl (Use Material - Aplicar Material): Aplica um material específico (definido no ficheiro .mtl) nas faces que surgem logo abaixo desta linha.
* Exemplo: usemtl Textura_Madeira

## 4. Outros Comandos Comuns

* # (Comment - Comentário): Qualquer linha iniciada por # é ignorada pelo Blender. Serve para notas do software que exportou o ficheiro (ex: versão do Blender, contagem de polígonos).
* s (Smoothing Group - Grupo de Suavização): Define se as faces seguintes devem parecer arredondadas (s 1 ou s on) ou quadradas/facetadas (s off).

------------------------------

[1] [https://www.3d-scantech.com](https://www.3d-scantech.com/pt/what-is-an-obj-file-and-how-to-use-it/)
[2] [https://www.3d-scantech.com](https://www.3d-scantech.com/pt/what-is-an-obj-file-and-how-to-use-it/)
