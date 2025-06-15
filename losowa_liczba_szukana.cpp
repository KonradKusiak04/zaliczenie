<html>
<head>
<title>main.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #b3ae60;}
.s1 { color: #bcbec4;}
.s2 { color: #6aab73;}
.s3 { color: #cf8e6d;}
.s4 { color: #bcbec4;}
.s5 { color: #2aacb8;}
</style>
</head>
<body bgcolor="#1e1f22">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
main.cpp</font>
</center></td></tr></table>
<pre><span class="s0">#include </span><span class="s2">&lt;stdio.h&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;time.h&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;stdlib.h&gt;</span>

<span class="s3">int </span><span class="s1">main</span><span class="s4">() {</span>
    <span class="s1">time_t t</span><span class="s4">;</span>
    <span class="s1">srand</span><span class="s4">(</span><span class="s1">time</span><span class="s4">(&amp;</span><span class="s1">t</span><span class="s4">));</span>
    <span class="s3">int </span><span class="s1">losowa </span><span class="s4">= </span><span class="s1">rand</span><span class="s4">() % </span><span class="s5">20 </span><span class="s4">+ </span><span class="s5">1</span><span class="s4">;</span>
    <span class="s3">int </span><span class="s1">ilosc </span><span class="s4">= </span><span class="s5">1</span><span class="s4">;</span>
    <span class="s1">printf</span><span class="s4">(</span><span class="s2">&quot;Wylosowano liczbe </span><span class="s3">\n</span><span class="s2">&quot;</span><span class="s4">);</span>
    <span class="s1">printf</span><span class="s4">(</span><span class="s2">&quot;Podaj liczbe od 1 do 20 </span><span class="s3">\n</span><span class="s2">&quot;</span><span class="s4">);</span>
    <span class="s3">int </span><span class="s1">liczba</span><span class="s4">;</span>
    <span class="s1">scanf</span><span class="s4">(</span><span class="s2">&quot;%d&quot;</span><span class="s4">, &amp;</span><span class="s1">liczba</span><span class="s4">);</span>

    <span class="s3">while </span><span class="s4">(</span><span class="s1">losowa </span><span class="s4">!=</span><span class="s1">liczba</span><span class="s4">){</span>
        <span class="s3">if</span><span class="s4">(</span><span class="s1">losowa </span><span class="s4">&gt; </span><span class="s1">liczba</span><span class="s4">){</span>
        <span class="s1">printf</span><span class="s4">(</span><span class="s2">&quot;Podana liczba jest mniejsza od szukanej </span><span class="s3">\n</span><span class="s2">&quot;</span><span class="s4">);</span>
        <span class="s1">ilosc</span><span class="s4">++;</span>
        <span class="s4">}</span>
        <span class="s3">else if</span><span class="s4">(</span><span class="s1">losowa </span><span class="s4">&lt; </span><span class="s1">liczba</span><span class="s4">) {</span>
        <span class="s1">printf </span><span class="s4">(</span><span class="s2">&quot;Podana liczba jest wieksza od szukanej </span><span class="s3">\n</span><span class="s2">&quot;</span><span class="s4">);</span>
        <span class="s1">ilosc</span><span class="s4">++;</span>
        <span class="s4">}</span>
        <span class="s1">printf</span><span class="s4">(</span><span class="s2">&quot;Wprowadz ponownie liczbe </span><span class="s3">\n</span><span class="s2">&quot;</span><span class="s4">);</span>
        <span class="s1">scanf</span><span class="s4">(</span><span class="s2">&quot;%d&quot;</span><span class="s4">, &amp;</span><span class="s1">liczba</span><span class="s4">);</span>
    <span class="s4">}</span>
        <span class="s3">if </span><span class="s4">(</span><span class="s1">losowa </span><span class="s4">== </span><span class="s1">liczba</span><span class="s4">);</span>
        <span class="s4">{</span>
            <span class="s1">printf</span><span class="s4">(</span><span class="s2">&quot;Zgadles w %d probach&quot;</span><span class="s4">, </span><span class="s1">ilosc</span><span class="s4">);</span>
        <span class="s4">}</span>

<span class="s4">}</span>
</pre>
</body>
</html>