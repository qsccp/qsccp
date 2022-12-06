## Compile and Run

1. Prerequisites：

    - Ubuntu 20.04:

      ```bash
      sudo apt install gir1.2-goocanvas-2.0 gir1.2-gtk-3.0 libgirepository1.0-dev python3-dev python3-gi python3-gi-cairo python3-pip python3-pygraphviz python3-pygccxml libsqlite3-dev libssl-dev libboost-all-dev
      sudo pip3 install kiwi
      ```

2. Pull Code：

   ```bash
   git clone https://github.com/Enidsky/qsccp.git
   cd dsccp
   git submodule update --init --recursive
   ```

3. Compile and install
    - **debug mode (slow but have log)**
      
      ```bash
      cd ns3
      
      # arm64 Linux => ./waf configure -d debug --boost-libs=/usr/lib/aarch64-linux-gnu
      ./waf configure -d debug
      
      # The first compilation must use ./waf to compile, otherwise there will be permission problems
      ./waf
      sudo ./waf install  
      ```
    - **optimized mode (fast but have no log)**
      
      ```bash
      cd ns3
      
      # arm64 Linux => ./waf configure -d optimized --boost-libs=/usr/lib/aarch64-linux-gnu
      ./waf configure -d optimized
      
      # The first compilation must use ./waf to compile, otherwise there will be permission problems
      ./waf
      sudo ./waf install
      ```

4. Config Path

   - Open `~/.bashrc` by vim

     ```bash
     vim ~/.bashrc
     ```

   - Jump to last line of `~/.bashrc` use `shift + G`

   - Add the following two lines at the end of the file

     ```bash
     export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig
     export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
     ```

   - Save and quit vim.

   - Execute the following command to make the configuration effective:

     ```bash
     source ~/.bashrc
     ```

5. Run scenario code

   - **debug mode (slow but have log)**

     ```bash
     cd ../scenario
     ./waf configure --debug
     ./waf --run=test
     
     # ./waf --run=test --vis
     ```

   - **optimized mode (slow but have log)**

     ```bash
     cd ../scenario
     ./waf configure
     ./waf --run=test
     
     # ./waf --run=test --vis
     ```