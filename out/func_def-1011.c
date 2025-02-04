
# 1 
static int cleanup_pipes(int *pipes){
  if( pipes ){

    close(pipes[1]);
    close(pipes[2]);

    pipes[1] = pipes[3];

    pipes[2] = -1;
    pipes[3] = -1;
  }
  return 0;
}