struct Oberon {
  short borsa_oro;
  short punti_ferita;
  short incantesimi;
  short pozione_guaritrice;
}

enum Tipo_terra {
  deserto,
  foresta,
  palude,
  villaggio,
  pianura
}

enum Tipo_mostro {
  nessuno,
  scheletro,
  lupo,
  orco,
  drago
}
struct Terra {
  enum Tipo_terra tipo_terra;
  enum Tipo_mostro tipo_mostro;
  short tesoro;
  struct Terra* terra_successiva;
}


  
  
 
