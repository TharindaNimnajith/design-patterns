public class SongPlayer {
    final SongComponent songList;

    // newSongList contains every Song, SongGroup,
    // and any Songs saved in SongGroups
    public SongPlayer(SongComponent newSongList) {
        songList = newSongList;
    }

    // Calls the displaySongInfo() on every Song
    // or SongGroup stored in songList
    public void getSongList() {
        songList.displaySongInfo();
    }
}
